use strict;
use warnings;
use autodie;

use Email::MIME;
use Email::Sender::Simple qw(sendmail);
use Path::Tiny;

my $directory = path(".");
# Email template
my $template = $directory->child($ARGV[0]);
my $template_content = $template->slurp_utf8();
# List of subscribents
my $subscribents_names_list = $directory->child($ARGV[1]);
my $subscribents_names_list_handle = $subscribents_names_list->openr_utf8();
my @subscribents_names = <$subscribents_names_list_handle>;
# List of subscribents' e-mail adresses
my $subscribents_emails_list = $directory->child($ARGV[2]);
my $subscribents_emails_list_handle = $subscribents_emails_list->openr_utf8();
my @subscribents_emails = <$subscribents_emails_list_handle>;

my %subscribents;
for(my $i = 0; $i <= $#subscribents_names; $i++)
{
    $subscribents{$subscribents_names[$i]} = $subscribents_emails[$i];
}
# Dictionary $subscribent -> message
my %messages;
my $template_content_copy = $template_content;
foreach (keys %subscribents)
{
    $template_content =~ s/\{username\}/$_/g;
    $messages{$_} = $template_content;
    $template_content = $template_content_copy;
}
my $email;
for(my $i = 0; $i <= $#subscribents_names; $i++)
{
    $email = Email::MIME->create(
        header_str => [
            From => 'newsletter@ankiedos.github.io',
            To => $subscribents_emails[$i],
            Subject => 'Test',
        ],
        attributes => {
            encoding => 'quoted-printable',
            charset => 'ISO-8859-2',
        },
        body_str => $messages{$subscribents_names[$i]},
    );
    sendmail($email);
}
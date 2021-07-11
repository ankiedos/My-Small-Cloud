use strict;
use warnings;

use Email::MIME;
use Email::Sender::Simple qw(sendmail);
use Email::Sender::Transport::SMTP;
my $email = Email::MIME->create(
    header_str => [
        From => 'a.kiedos@opolelo3.onmicrosoft.com',
        To => 'antek_kiedos@outlook.com',
        Subject => 'Test',
    ],
    attributes => {
        encoding => 'quoted-printable',
        charset => 'utf8',
    },
    body_str => "Witaj Świecie!",
);
my $transport = Email::Sender::Transport::SMTP->new({
    host => 'server',
    port => 587,
    sasl_username => 'Antoni Kiedos',
    sasl_password => 'nkomlp1380J',
});
sendmail($email, { transport => $transport});
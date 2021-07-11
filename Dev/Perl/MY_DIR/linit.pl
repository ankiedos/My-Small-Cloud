use strict;
use warnings;
use autodie;

use Path::Tiny;

my $dir = path(".");
my $file = $dir->child($ARGV[0]);
my $file_handle;
my @file_helper;
my @file_helper_lines;

if($ARGV[1] eq "-a")
{
    $file_handle = $file->opena_utf8();
    $file_handle->print("\r\n" . $ARGV[2]);
}
elsif($ARGV[1] eq "-p")
{
    @file_helper = $file->slurp_utf8();
    $file_handle = $file->openw_utf8();
    $file_handle->print($ARGV[2]);
    foreach (@file_helper)
    {
        $file_handle->print("\r\n");
        $file_handle->print($_);
    }
}
elsif($ARGV[1] eq "-i")
{
    @file_helper_lines = $file->slurp_utf8();
    $file_handle = $file->openw_utf8();
    for(my $i = 0; $i < $ARGV[2]; $i++)
    {
        $file_handle->print($file_helper_lines[$i] . "\r\n");
    }
    $file_handle->print($ARGV[3]);
    for(my $i = $ARGV[2]; $i < $#file_helper_lines; $i++)
    {
        $file_handle->print("\r\n");
        $file_handle->print($file_helper_lines[$i]);
    }
}
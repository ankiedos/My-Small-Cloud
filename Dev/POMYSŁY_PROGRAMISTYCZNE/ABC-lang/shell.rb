def exec(command, args)
    case command
    when "echo"
        puts args
    when "read"
        
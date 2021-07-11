def interpret(file)
    x = 0
    vars = {}
    file.each_line{|line|
        line = line.gsub('\t', '').split
        command = line.shift
        case command
        when "assign"
            if line[1] =~ /\d+/
                vars[line[0]] = line[1].to_i
            elsif line[1] =~ /\d+\.\d+/
                vars[line[0]] = line[1].to_f
            else
                vars[line[0]] = line[1]
            end
        when "print"
            if line[0] == 'x'
                puts x
            elsif vars.has_key?(line[0])
                puts vars[line[0]]
            else
                puts line[0] if line[0]
                puts if !line[0]
            end
        when "scan"
            gets x
            puts x
        when "add"
            if line[1]
                if vars.has_key?(line[1])
                    if vars.has_key?(line[0])
                        x = vars[line[0]] + vars[line[1]]
                    else
                        x = line[0].to_i + vars[line[1]]
                    end
                elsif vars.has_key?(line[0])
                    x = vars[line[0]] + line[1].to_i
                end
                x = line[0].to_i + line[1].to_i
            else
                x = x.to_i
                if vars.has_key?(line[0])
                    x += vars[line[0]]
                else
                    x += line[0].to_i
                end
            end
        when "sub"
            if line[1]
                x = line[0].to_i - line[1].to_i
            else
                x -= line[0].to_i
            end
        when "mult"
            if line[1]
                x = line[0].to_i * line[1].to_i
            else
                x *= line[0].to_i
            end
        when "div"
            if line[1]
                x = line[0].to_f / line[1].to_f
            else
                x /= line[0].to_f
            end
        when "pow"
            if line[1]
                x = line[0].to_i ** line[1].to_i
            else
                x **= line[0].to_i
            end
        when "root"
            x = line[0].to_i ** (1 / line[1].to_f)
        when "square"
            x = line[0].to_i ** 2
        when "cube"
            x = line[0].to_i ** 3
        when "sqrt"
            x = line[0].to_i ** (1 / 2)
        when "cbrt"
            x = line[0].to_i ** (1 / 3)
        when /\/\/.*?/
            next
        else
            raise "Unknown opcode!"
        end
    }
end
interpret open(ARGV[0]).read
# live_loop :flibble do
# sample :bd_haus, rate: 1
# sample :ambi_choir, rate: 0.3 # fajnie brzmi # rate: 3 -- skrzypienie, alarm
# sleep 0.5
# end

# section 1
## section 1.1
###d2to25f = [0.2, 0.21, 0.22, 0.23, 0.24, 0.25].choose
###d25to3f = [0.25, 0.26, 0.27, 0.28, 0.29, 0.3].choose
## section 1.2
###d3to35f = [0.3, 0.31, 0.32, 0.33, 0.34, 0.35].choose
###d35to4f = [0.35, 0.36, 0.37, 0.38, 0.39, 0.4].choose

# section 2
###d2to3f = [d2to25f, d25to3f].choose
###d3to4f = [d3to35f, d35to4f].choose

# live loops
live_loop :flibble do
  play 60, release: 2
  sleep 0.25
  play 60, release: 2
  sleep 1
end

live_loop :flibble do
  sample :ambi_choir, rate: 0.36 # [d2to3f, d3to4f].choose
  sleep 0.25
end
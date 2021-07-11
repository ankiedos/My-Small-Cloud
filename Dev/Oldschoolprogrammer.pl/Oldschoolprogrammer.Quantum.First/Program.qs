namespace Quantum.Oldschoolprogrammer.Quantum.First.Program
{
        open Microsoft.Quantum.Canon;
        open Microsoft.Quantum.Intrinsic;
        open Microsoft.Quantum.Measurment;

        operation SetQubitState(desired : Result, q1 : Qubit) : Unit
        {
            if(desired != M(q1))
            {
                X(q1);
            }
        }
        operation TestBellState(count : Int, initial : Result) : (Int, Int)
        {
            mutable numOnes = 0;
            using(qubit = Qubit())
            {
                for(test in 1..count)
                {
                    SetQubitState(initial, qubit);
                    let res = M(qubit);

                    // Count the number of ones we saw:
                    if(res == One)
                    {
                        set numOnes += 1;
                    }
                }
                //let x = (numOnes, count);

                SetQubitState(Zero, qubit);
            }

            // Return number of times we saw a |0> and number of times we saw a |1>
            Message("Test results (0, 1): ");
            return (count - numOnes, numOnes);
        }
        operation my_CNOT(control : Qubit, target : Qubit) : Qubit
        {
            using(aux_q = Qubit())
            {
                using(ret = Qubit())
                {
                    SetQubitState(One, aux_q);
                    if(control == aux_q)
                    {
                        SetQubitState(M(X(target)), ret);
                    }
                    else
                    {
                        SetQubitState(M(target), ret);
					}
                    return ret;
				}
            }
        }
    }
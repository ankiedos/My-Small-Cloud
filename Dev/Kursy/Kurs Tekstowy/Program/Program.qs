namespace Program
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
    @EntryPoint()
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
    operation my_CNOT(control : Qubit, target : Qubit) : Unit
    {
        using(aux_q = Qubit())
        {
            SetQubitState(One, aux_q);
            if(control == aux_q)
            {
                return 1 - M(target);
            }
        }
    }
}
/// LAPTOP-MABC7EPS
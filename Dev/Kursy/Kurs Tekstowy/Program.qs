namespace Quantum
{
    open Microsoft.Quantum.Convert;
    open Microsoft.Quantum.Math;
    open Microsoft.Quantum.Measurement;
    open Microsoft.Quantum.Canon;
    open Microsoft.Quantum.Intrinsic;
    @EntryPoint()
    operation RandGen() : Result
    {
        using(q = Qubit())
            H(q);
            return MResetZ(q);
    }
}
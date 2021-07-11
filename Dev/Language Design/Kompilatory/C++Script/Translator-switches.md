--log-to-file file.json
Example:
{
    "builds": [
        {
            "exit status": 0,
            "flags": [{"option": "--log-to-file", "value": "build.json"}, {"option": "-O3", "value": ""}],
        }
    ]
}
-O (constexprs)
-O1 (consts)
-O2 (functions)
-O3 (variables)
--prompt-to-optimise (even if -Ox is typed)
Example:
Optimise 'pi' constant? (y/n):
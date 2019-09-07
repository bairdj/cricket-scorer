This is a small cricket scoring application written in C primarily to practise using C.

There are no dependencies.

It works simply by prompting the user for the outcome of each ball. The user simple enters the
number of runs scored on each ball, which will then increment the team and batsman's score.

There are a few special inputs handled by the program:
* x: Exits the program
* .: Equivalent to 0 - a *dot ball*
* s: Prints a scorecard
* !: Wicket

Extras:
* n: No ball
* w: Wide
* b: Bye
* l: Leg bye
You must set the number of byes and leg byes.
Wide and no ball will default to the one penalty run, but you can also add a number of runs which will be attributed to the batsman.

## Development roadmap
* Add bowling figures
* Handle extras - wide, no ball, byes, leg byes
* Dismissal types
* Ability to read/write scores to file
* Support multiple innings
* Add extra functionality for limited overs or first class cricket
* Optimisations for speed and memory usage

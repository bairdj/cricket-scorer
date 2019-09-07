#include <stdlib.h>
#include <stdio.h>

#define VERSION "0.1.2"
#define BALLS_PER_OVER 6
#define TOTAL_WICKETS 10

void welcome();
void print_score(int runs, int wickets, int balls);

int main() {
	welcome();
	/* Declare variables */
	int runs = 0;
	int wickets = 0;
	int balls = 0;
	char input, *ip;
	ip = &input;
	while((input = getchar()) != 'x' & wickets < TOTAL_WICKETS) {
		/* Skip enter */
		if (input == '\n') continue;
		/* Handle input */
		if (input == '.') {
			balls += 1;
		} else if (input == 'w') {
			balls += 1;
			wickets += 1;
		} else {
			balls += 1;
			/* Convert to int. This works because '0' is also an int, and spec guarantees numbers are sequential */
			runs += input - '0';
		}
		print_score(runs, wickets, balls);
	}
	
	return 0;
}

void welcome() {
	printf("Cricket Scorer\n");
	printf("Version %s\n", VERSION);
}

void print_score(int runs, int wickets, int balls) {
	printf("%d/%d from %d.%d overs\n", wickets, runs, balls / BALLS_PER_OVER, balls % BALLS_PER_OVER);
	/* Calculate and display run rate */
	double divisor = (balls / BALLS_PER_OVER) + ((balls % BALLS_PER_OVER) / (double) BALLS_PER_OVER);
	double run_rate = runs / divisor;
	printf("Run rate: %.2f\n", run_rate);	

}

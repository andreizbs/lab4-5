#include "structs.h"
int process(struct doclad arr[], int i) {
	
	struct time answer;
	vector <int> times;

		for (int j = 0; j < i; j++)
		times.push_back(arr[j].longer = (arr[j].end.hours - arr[j].start.hours) * 60 - arr[j].start.minutes + arr[j].end.minutes);
	heapSort(times);
	//answer.hours = times[times.size() - 1] / 60;
	//answer.minutes = times[times.size() - 1] % 60;
	return times[times.size() - 1];
}
#include "consts.h"
#include "structs.h"
int main(){
  setlocale(LC_ALL, "Russian");
  cout << "Variant 2. \nConference program. \nGolubentsev Andrei\n";
  int i = 0;
  arr = new struct doclad[100];
  while (!fin.eof()) {
	  arr[i] = input();
	  i++;
  }
  for (int j = 0; j < i; j++)
	if ((arr[j].surname == "������") && (arr[j].name == "����") && (arr[j].otchestvo == "��������"))
	  output (arr[j]);
  fout << endl;
  for (int j = 0; j < i; j++)
	  if (((arr[j].end.hours- arr[j].start.hours) * 60 - arr[j].start.minutes + arr[j].end.minutes)>15)
		  output(arr[j]);
  fout << endl;
  return 0;
}

#include<bits/stdc++.h>

using namespace std;

struct Workshop{
  int start_time;
  int duration;
  int end_time;
};

struct Available_Workshops{
  int n;
  vector<Workshop> workshops;//use vectors for easy shorting
  Available_Workshops(int &N){
    workshops = vector<Workshop>(N);
    n = N;
  }
};

bool compare(Workshop w1,Workshop w2){
  return w1.end_time < w2.end_time;
}

Available_Workshops* initialize (int start_time[], int duration[], int n){
  Available_Workshops* available = new Available_Workshops(n);
  for(int i = 0; i < n; i++){
    available->workshops[i].start_time = start_time[i];
    available->workshops[i].duration = duration[i];
    available->workshops[i].end_time = start_time[i] + duration[i];    
  }
  sort(available->workshops.begin(), available->workshops.end() ,compare); 
  return available;
} 

int CalculateMaxWorkshops(Available_Workshops* ptr){
  int current_time = -1,count = 0;
  for(int i = 0; i < ptr->n; i++){
    if(current_time <= ptr->workshops[i].start_time){
      count++;
      current_time = ptr->workshops[i].end_time;
    }
  }    
  return count;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);   
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}


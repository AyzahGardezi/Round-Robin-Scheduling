int roundRobin(std::vector <int> jobs, int slice, int index){
 
  int to_comp, count = 0, i = 0;
  int length = jobs.size();
  
  if (length == 1)
    return jobs[0];
  
  while(jobs[index] > 0)
  {
    to_comp = jobs[i] - slice;
    
    if (jobs[i] != 0){
      if (to_comp > 0){
        jobs[i] = to_comp;
        count+=slice;
      }
      else{
        count += jobs[i];
        jobs[i] = 0;
      }
    }
      i = (i+1)%length;
  }
  return count;
}

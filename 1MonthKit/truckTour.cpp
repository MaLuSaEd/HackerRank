int truckTour(vector<vector<int>> petrolpumps) {
    int N = petrolpumps.size();
    int petrol = 0;
    int km = 0;
    int res = 0;
    int recorridos = 0;
    int tmp_index;
    while (recorridos != N) {
        tmp_index = (res+recorridos)%N;
        petrol += petrolpumps[tmp_index][0];
        km = petrolpumps[tmp_index][1];
        if (petrol >= km) {
            recorridos++;
            petrol = petrol - km;
        }else{
            recorridos = 0;
            petrol = 0;
            res++;
        }
    }
    return res;
}

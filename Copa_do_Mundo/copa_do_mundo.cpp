#include <iostream>
#include <string>
#include <map>
#include <utility>

using namespace std;

/*  CONTAR A QUANTIDADE DE EMPATES ENTRE OS "T" TIMES PARTICIPANDO, NAS
    N  PARTIDAS OCORRIDAS. FINALIZA A ENTRADA QUANDO T = 0
*/
int main(){
    int N, T, aux = 0, num_pontos, empates = 0, teste = 0 , tot_pontos;
    map<string, int> mp_times;
    map<string, int>::iterator iter;
    string nome_time;
    cin >> T;
    while ( T != 0 ){
        cin >> N;
        tot_pontos = 0;
        cout << "Teste: " << T << " " << N << "\n" << endl;
        for ( int i = 0; i < T; i++){
            num_pontos = 0;
            cin >> nome_time;
            cin >> num_pontos;
            mp_times.insert(pair<string, int>(nome_time, num_pontos));
            //mp_times[nome_time] = num_pontos;
            if( num_pontos >= 3) empates += num_pontos%3;
            tot_pontos += num_pontos;
        }
        int tot_empates = N*T;
        iter = mp_times.begin();
        cout << mp_times.size() << endl;
        for ( iter; iter != mp_times.end(); iter++){
            cout << iter->first << "_" << iter->second << endl;
        }
        cout << "Empates -> " << empates << " " << tot_empates - tot_pontos << "\n" << endl;
        empates = 0;
        mp_times.clear();
        cin >> T;
    }
    return 0;
}



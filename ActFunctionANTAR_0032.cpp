
{

float Ujian1, Ujian2;

cout << "Masukkan Nilai Ujian 1 : ";
cin >> Ujian1;
cout << "Masukkan Nilai Ujian 2 : ";
cin >> Ujian2;

cout << "Status Kelulusan : "
<< CekStatusBerparameter(HitungRerataBerparameter(Ujian1, Ujian2) );

}
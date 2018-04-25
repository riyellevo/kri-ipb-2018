int sizearray;
int saving[100];
int sizearray;
jalan(){
	sizearray=sizeof(saving);
	//nyalain sensor
	//jalan_lurus
	if(jarak_kanan>8){ //prioritas1=belok kanan
		belok_kanan();
	}
	else if(jarak_kiri>59 && jarak_kiri<67){
		belok_kiri(); // belok kiri ruang spesifik
	}
	else if(jarak_kiri>8 && jarak_kanan<8 && jarak_depan>8){ //pertigaan kiri
		jalan();
	}
	else if(jarak_kiri>8){ //prioritas3
		belok_kiri();
	}
	else if(jarak_kiri<8 && jarak_kanan<8 && jarak_depan<8){ //pertigaan kiri
		putar_balik();
	}
	if(saving[sizearray]!=s)
		saving[++sizearray]=s;
	jalan();	
	
}
//contoh saving belok
belok_kanan(){
	//proses belok kanan
	//jalan sedikit
	if(ada_garis==1){
		check_room();
	}
	else{
		saving[++sizearray]=ka;
	}
}
belok_kiri(){
	//proses belok kanan
	//jalan sedikit
	if(ada_garis==1){
		check_room();
	}
	else{
		saving[++sizearray]=ki;
	}
}

check_room(){
	//nyalain sensor api
	//cari api
	if(sensorapi==1){
		//deketin api
		//padamin
	}
	else{
		putar_balik_room();
		
	}
}

putar_balik_room(){
	if(saving[size-2]==ki && jarak_kiri > 8)
		belok_kiri();
}

jalan_prio_kiri(){
	sizearray=sizeof(saving);
	//nyalain sensor
	//jalan_lurus
	if(jarak_kanan>8){ //prioritas1=belok kanan
		belok_kanan();
	}
	else if(jarak_kiri>59 && jarak_kiri<67){
		belok_kiri(); // belok kiri ruang spesifik
	}
	else if(jarak_kiri>8 && jarak_kanan<8 && jarak_depan>8){ //pertigaan kiri
		jalan();
	}
	else if(jarak_kiri>8){ //prioritas3
		belok_kiri();
	}
	else if(jarak_kiri<8 && jarak_kanan<8 && jarak_depan<8){ //pertigaan kiri
		putar_balik();
	}
	if(saving[sizearray]!=s)
		saving[++sizearray]=s;
	jalan();
}


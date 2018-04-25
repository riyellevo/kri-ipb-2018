proses(){
	x=sizeof(saving);
	statis=x;
	while(x){
		if(saving[x]==B&&x!=0&&x+1<=statis){
			if(saving[x-1]==L){
				if(saving[x+1]==L){
					savinginverse[x-1]==S;
					x--;
				}
				else if(saving[x+1]==S){
					savinginverse[x-1]==R;
					x--;
					}
				else{
					savinginverse[x-1]==B;
					x--;
					}//R
			}
			else if(saving[x-1]==R){
				if(saving[x+1]==L){
					savinginverse[x-1]==B;
					x--;
					}
				else if(saving[x+1]==S){
					savinginverse[x-1]==L;
					x--;}
				else{
					savinginverse[x-1]==S;
					x--;
				}	//R
			}
			else if(saving[x-1]==S){
				if(saving[x+1]==L){
					savinginverse[x-1]==R;
					x--;
					}
				else if(saving[x+1]==S){
					savinginverse[x-1]==S;
					x--;
					}
				else{
					savinginverse[x-1]==L;
					x--;
					}//R
			}
		}
		x--;
	}
}

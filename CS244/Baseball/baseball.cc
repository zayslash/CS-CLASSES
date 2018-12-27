baseball::baseball(){

     battingAverage = 0;
     hits = 0;
     bats = 0;

}

void baseball::setHitBall(bool check){

   if(check == true){
      hits++;
      battingAverage = (battingAverage + 1) / 2;
    }

    bats++;
  }

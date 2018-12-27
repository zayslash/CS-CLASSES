
class baseball{

  private:
  std::string playerName;
  double battingAverage ;
  double strength;

  int hits;
  int bats;


  public:

  baseball();

  baseball(std::string playerName){
    this->playerName = playerName;
  }

  void setPlayerName(std::string playerName){
    this->playerName = playerName;
  }

  void setHitBall(bool);

  double getbatAverage() const{
   return battingAverage;
  }

  std::string getPlayerName() const{
    return playerName;

  }

  int getBats() const{
    return bats;


  }

  int getHits() const{
  return hits;
  }

};

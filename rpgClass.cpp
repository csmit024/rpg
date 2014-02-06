Chara::Chara(){
  heroName = "Mario";
  hp = 10;
  mg = randomStat();
  str = randomStat();
  def = randomStat();
}

Chara::Chara(string name){
  heroName = name;
  hp = 10;
  mg = randomStat();
  str = randomStat();
  def = randomStat();
}

Chara::levelUp(){

}

int Chara::randomStat(){
  srand(time(0));
  int x = (rand() % 10) + 1;
  return x;
}

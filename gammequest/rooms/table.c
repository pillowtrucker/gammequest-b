inherit "/lib/environment/environment.c";

object region;
/*
private object * playerList() {
  sort_array(users(),
             (: $1->effectiveLevel() < $2->effectiveLevel() :));
                                                               }
private object * getMembersForGuild(string guildName {
  pList = playerList();
  pList = filter(pList, (: $1->memberOfGuild($2) :), guild);
  return pList;
// this only returns players, not npcs
}
*/ 
private string getFriends() {
  
  return "This should say how many people from the Friends guild there are here.";
  // it will be much easier to just list them in their own mappings similar to 'actors' in the tutorial, since there is no way to list npcs
  }
private string getEnemies() {
  return "This should say how many spies from the Enemies guild there are here.";
// vide: comment to getFriends
}

public void Setup() {
  setInterior("/lib/environment/interiors/banquet-hall.c");
  addFeature("/gammequest/features/thetable.c");
  region = clone_object("/lib/environment/region.c");
  region->setRegionName("the table");
  
  setAdditionalLongDescription(
                               getFriends() + "\n" + getEnemies()
);


}


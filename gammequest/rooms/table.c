inherit "/lib/environment/environment.c";

object region;

public void Setup() {
  setInterior("/lib/environment/interiors/banquet-hall.c");
  region = clone_object("/lib/environment/region.c");
  region->setRegionName("the Table");
  

}

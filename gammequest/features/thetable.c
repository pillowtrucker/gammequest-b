inherit "/lib/environment/features/baseFeature.c";
public void Setup() {
  Name("thetable");
  suppressEntryMessage();
  addDescriptionTemplate("the radiant Table "
                         "with all your friends present."
);
  addSourceOfLight(10);
}

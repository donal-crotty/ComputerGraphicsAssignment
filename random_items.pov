#include "colors.inc"
#include "metals.inc"
#include "woods.inc"
#include "textures.inc"
#include "glass.inc"
#include "stones.inc"
#include "shapes.inc"
#include "shapes2.inc"
#include "functions.inc"
#include "math.inc"
#include "transforms.inc" 
#include "golds.inc"
#include "shapes3.inc"
#include "keyset.inc"
#include "coins.inc" 
#include "highlighter.inc"  
#include "phone.inc"    
#include "wallet.inc"
#include "bottle.inc"     
    
//=====================================================================
//                              Camera & Light Source
//===================================================================== 
camera {
//   location <3.75-8*cos(2*pi*clock), 5, 2.25-8*(sin(2*pi*clock))>  
   location<2,11,-15>
   look_at <0,0,0>
}
light_source {<-50, 150, -30> color White}

//=====================================================================
//                      Horizontal Plane
//=====================================================================                    
                                                            
/* Horizontal Plane */
plane{ <0,1,0>, -0.012  // tiling pattern in the xz plane  

                texture{ T_Wood12    
                finish { phong 2 } 
                rotate<0,0,0> scale 3 translate<0,0,0>
              } // end of texture 
  }
 
//=====================================================================
//                      Object Declarations
//===================================================================== 
object{bottle scale <1.5,1.5,1.5> rotate<0,240,0> translate<-0.55,0,0>}
object{bottleLogo scale <1.7,0.7,0> rotate<0,0,90> translate<-0.45,1,-0.971>}

object{modernKey scale <-0.35,-0.35,0> rotate<-85,90,0> translate<-1,0.25,-4.2>}
object{silver_key scale <0,0,0> rotate<0,15,0> translate<-2.4,0,-4.5>}
object{keyRing scale <0,0,0> rotate<145,0,0> translate<-1.95,0.25,-4.42>}
object{gymTag scale<1.5,1.5,1.5> rotate<90,150,0> translate<-2,0.50,-4.23>} 
object{cexTag scale<1.5,1.5,1.5> rotate<90,165,0> translate<-2.05,0.19,-4.20>}

object{oneEuro scale <-0.5,0.5,0> rotate<90,0,0> translate<1,0.6,-5.5>}
object{tenCent scale <-0.5,0.5,0> rotate<90,0,0> translate<1.1,0.4,-5.5>}
object{tenCent scale <-0.5,0.5,0> rotate<90,5,0> translate<1,0.2,-5.5>}
object{fiftyCent scale <-0.5,0.5,0> rotate<90,3,0> translate<1.1,0,-5.5>}

object{highlighter scale <1.25,1.25,1.25> rotate<0,180,0> translate<-0.5,0.35,-3.40>}
object{phone scale <-0.55,0,0> rotate<0,270,0> translate<-1.5,-1.175,-1.85>}
object{wallet scale<2.3,2.3,1.755> rotate<167,15,0> translate<-2.75,1,-5.3>}  
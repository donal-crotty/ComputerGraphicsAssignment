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
#include "bottle.inc"
#include "wallet.inc" 
#include "phone.inc"    

    
//=====================================================================
//                              Camera & Light Source
//===================================================================== 
camera {
//   location <3.75-8*cos(2*pi*clock), 5, 2.25-8*(sin(2*pi*clock))>  
   location<-1,3.5,-10>
   look_at <0,0,0>
}
light_source {<-50, 50, -30> color White}


//=====================================================================
//                      Horizontal Plane
//=====================================================================                    
                                                            
/* Horizontal Plane */
#plane{ <0,1,0>, -0.012  // tiling pattern in the xz plane  

                texture{ T_Wood12    
                finish { phong 2 } 
                rotate<0,0,0> scale 3 translate<0,0,0>
              } // end of texture 


  }



//=====================================================================
//                      Object Declarations
//===================================================================== 
object{bottle scale <1,1,1> rotate<0,180,0> translate<-0.5,0,0>}
object{bottleLogo scale <1.5,0.5,0> rotate<0,0,90> translate<0,0.5,-0.95>}

object{modernKey scale <-0.35,-0.35,0> rotate<-85,90,0> translate<-1,0.25,-4.2>}
object{silver_key scale <0,0,0> rotate<0,15,0> translate<-2.4,0,-4.5>}
object{keyRing scale <0,0,0> rotate<145,0,0> translate<-1.95,0.25,-4.42>}
object{gymTag scale<0,0,0> rotate<0,-30,0> translate<-1.2,0.11,-4.5>}
object{cexTag scale<0,0,0> rotate<0,-20,0> translate<-1.35,0.095,-4.6>}

object{oneEuro scale <-0.5,0.5,0> rotate<90,0,0> translate<1,0.6,-5.5>}
object{tenCent scale <-0.5,0.5,0> rotate<90,0,0> translate<1.1,0.4,-5.5>}
object{tenCent scale <-0.5,0.5,0> rotate<90,5,0> translate<1,0.2,-5.5>}
object{fiftyCent scale <-0.5,0.5,0> rotate<90,3,0> translate<1.1,0,-5.5>}

object{highlighter scale <0,0,0> rotate<0,180,0> translate<0,0.35,-3.5>}
object{phone scale <-0.45,0,0> rotate<0,270,0> translate<-0.95,-1.175,-1.95>}
object{wallet scale<1.5,1.5,1.5> rotate<145,15,0> translate<-2.75,1.5,-5>}        


//object{bottle scale <1,1,1> rotate<0,180,0> translate<-0.5,0,0>}



//object{modernKey scale <-0.35,-0.35,0> rotate<85,-90,0> translate<-1,0.2,-4.2>}
//object{silver_key scale <0,0,0> rotate<15,15,0> translate<-2.4,0,-4.5>}
//object{keyRing scale <0,0,0> rotate<155,0,0> translate<-1.95,0.25,-4.4>}
//object{gymLabel scale <-0.25,-0.25,-0.25> rotate<15,345,0> translate<-2.25,0.5,-4>}  
//object{cexLabel scale <-0.25,-0.25,-0.25> rotate<0,270,0> translate<-2,0.50,-4>}  
//

//Start Coins
//object{oneEuro scale <-0.5,0.5,0> rotate<90,0,0> translate<1,0.6,-5.5>}
//object{tenCent scale <-0.5,0.5,0> rotate<90,0,0> translate<1.1,0.4,-5.5>}
//object{tenCent scale <-0.5,0.5,0> rotate<90,5,0> translate<1,0.2,-5.5>}
//object{fiftyCent scale <-0.5,0.5,0> rotate<90,3,0> translate<1.1,0,-5.5>}
//End coins
//object{highlighter scale <0,0,0> rotate<0,180,0> translate<0,0.35,-3.5>}   
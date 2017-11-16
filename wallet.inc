//wallet
#declare Leather = texture
{
  pigment
  {
    bozo
    turbulence 0.8
    color_map
    {
   	[0.00 color rgb <0.220, 0.100, 0.043>]
      [1.00 color rgb <0.349, 0.102, 0.049>]
    }
    scale .3
  }
  normal
  {
    crackle 0.1
slope_map {
	[0 <0,1>]
	[.05 <1,0>]
	[.95 <1,0>]
	[1  <0,-1>]
	}

 turbulence .1
    scale .1
  }
  finish {
    specular 0.45
  }
}
 
#declare  wallet = union {
//leather cover
       object{ // Round_Box(A, B, WireRadius, UseMerge)
        Round_Box(<-1,0,-1>,<0.2,0.15,1.29>, 0.03   , 0)  
         
	    material {    
	        texture{ Leather
                   finish { phong 1}
                  }
                }
        scale<1,1,1>  rotate<0, 0,0> translate<0,0.1,0>
      } // -
      
//leather strap
#include "shapes3.inc"
object{  Segment_of_CylinderRing( 0.25, // major radius,
                                  0.20, // minor radius,  
                                  0.35, // height H,
                                  200  // angle (in degrees)  
                                ) 
	    material {    
	        texture{ Leather
                   finish { phong 1}
                  }
                }
        scale <1,1,1> rotate<-88.5,0,100> translate<0.01,0.265,0.4>
      } // end of object

//leather strap metal button
object { //Round_Cylinder(point A, point B, Radius, EdgeRadius, UseMerge)
         Round_Cylinder(<0,0,0>, <0,0.30,0>, 0.09 ,       0.05,   0)  
         
         texture { T_Copper_1A
                   //normal { bumps 0.5 scale 0.15} 
                   finish { phong 1}
                 } // end of texture 
         scale<1,1,1>  rotate<0, 0,0> translate<0.05,-0,0.235>
       } // ---------------------------------------------------------

 

//metal thing
    object{ // Round_Box(A, B, WireRadius, UseMerge)
        Round_Box(<-1,0,-1>,<0.2,0.14,1.3>, 0.05   , 0)  
         
	    material {    
	        texture{ Silver2
                   finish { phong 1}
                  }
                }
        scale<1,1,1>  rotate<0, 0,0> translate<0.01,0.1,0>
      } // -
      
//bottom black strip thing
    object{ // Round_Box(A, B, WireRadius, UseMerge)
        Round_Box(<-0.95,0,0>,<0.05,0.05,1.31>, 0   , 0)  
         
        texture{ pigment{ color Black}
               //normal { radial sine_wave frequency 30 scale 0.25 }
                 finish { phong 1 }
                }
        scale<1,1,1>  rotate<0, 0,0> translate<0.08,0.120,0>
      } // -

//bottom black triangle thing
// linear prism in y-direction: from .. ,to ..,number of points (first = last)
prism { 0.00 ,0.05 , 4
       <-0.01, 0.00>, // first point
       < 0.1, 0.00>, 
       < 0.00,-0.25>,
       <-0.01, 0.00>  // last point = first point !!!

       texture { pigment{ color Black } 
                 finish { phong 1.0 }
               } // end of texture

       scale <0, 0, 0>
       rotate<0,60,180> 
       translate<-0.82, 0.175, 1.38> 
     } // end of prism --------------------------------------------------------
      
      
    
      
//cards
//first card(top)
object{ // Round_Box(A, B, WireRadius, UseMerge)
        Round_Box(<-0.5,0,-1.5>,<0.5,0,0.5>, 0.01   , 0)  
         
        texture{ pigment{ color Green}
               //normal { radial sine_wave frequency 30 scale 0.25 }
                 finish { phong 1 }
                }
        scale<1,1,1>  rotate<0, 0,0> translate<-0.38,0.16,0>
      } // ---------------------------------------------------------

//second card      
object{ // Round_Box(A, B, WireRadius, UseMerge)
        Round_Box(<-0.5,0,-1.6>,<0.5,0,0.5>, 0.01   , 0)  
         
        texture{ pigment{ color Blue}
               //normal { radial sine_wave frequency 30 scale 0.25 }
                 finish { phong 1 }
                }
        scale<1,1,1>  rotate<0, 0,0> translate<-0.38,0.18,0>
      } // ---------------------------------------------------------      
      
//third card      
object{ // Round_Box(A, B, WireRadius, UseMerge)
        Round_Box(<-0.5,0,-1.675>,<0.5,0,0.5>, 0.01   , 0)  
         
        texture{ pigment{ color White}
               //normal { radial sine_wave frequency 30 scale 0.25 }
                 finish { phong 1 }
                }
        scale<1,1,1>  rotate<0, 0,0> translate<-0.38,0.20,0>
      } // ---------------------------------------------------------
      
//fourth card
object{ // Round_Box(A, B, WireRadius, UseMerge)
        Round_Box(<-0.5,0,-1.79>,<0.5,0,0.5>, 0.01   , 0)  
         
        texture{ pigment{ color Blue}
               //normal { radial sine_wave frequency 30 scale 0.25 }
                 finish { phong 1 }
                }
        scale<1,1,1>  rotate<0, 0,0> translate<-0.38,0.22,0>
      } // ---------------------------------------------------------
      
//fifth card(last)
object{ // Round_Box(A, B, WireRadius, UseMerge)
        Round_Box(<-0.5,0,-1.88>,<0.5,0,0.5>, 0.01   , 0)  
         
        texture{ pigment{ color White}
               //normal { radial sine_wave frequency 30 scale 0.25 }
                 finish { phong 1 }
                }
        scale<1,1,1>  rotate<0, 0,0> translate<-0.38,0.24,0>
      } // ---------------------------------------------------------        
      
}
      
      
      


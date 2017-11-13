#ifndef (key_debug)
  #declare key_debug=off;
#end


#declare KeyBody = prism {
        linear_sweep
        -0.05    // Min Height
         0.05    // Max Height
         21     // Number of Points
        <-0.40, 0.00>, <-0.40, 3.60>, < 0.00, 4.00>, < 0.40, 3.60>, 
        < 0.10, 3.30>, < 0.30, 3.10>, < 0.10, 2.90>, < 0.40, 2.60>, 
        < 0.40, 2.40>, < 0.30, 2.30>, < 0.40, 2.20>, < 0.40, 2.00>, 
        < 0.20, 1.80>, < 0.50, 1.50>, < 0.20, 1.20>, < 0.40, 1.00>, 
        < 0.40, 0.80>, < 0.70, 0.80>, < 0.70, 0.60>, < 0.60, 0.00>,
        <-0.40, 0.00>
        
        rotate -90*x
}

#declare CutPiece = intersection {
        prism {
                linear_sweep
                -0.00005        // Min Height - Extra length for the difference
                 4.00005        // Max Height - Extra length for the difference
                 5              // Number of Points
                <-0.08, 0.00>, <-0.10, 0.05>, <0.10, 0.05>, <0.08, 0.00>, 
                <-0.08, 0.00>
        
                // Micro translation for the difference        
                translate 0.00005*z
        }
        
        plane {  x, 0 rotate -20*z }
        plane { -x, 0 rotate  20*z }
}        

#declare KeyHeadDeco = union {
        difference {
                intersection {
                        cylinder { <0, 0, -0.015>, <0, 0, 0.015>, 1 }
                        plane { y, .80 }
                }
                
                cylinder { <0, 0, -0.01505>, <0, 0, 0.01505>, .30
                        translate -.70*y 
                }
                
                bounded_by { cylinder { <0, 0, -0.015>, <0, 0, 0.015>, 1 } }
        }

        // Cut Pieces
        #if (key_debug=off)
                #declare theta = 39;
                #while (theta <= 324)
                        box { <-0.015, 1.025, -0.015>, <0.015, 1.175,  0.015> rotate theta*z}
                        box { <-0.015, 1.025, -0.015>, <0.015, 1.175, -0.015> rotate theta*z}
                        #declare theta = theta + 3;
                #end
        #else
                #debug "\n Key.inc:\n"
                #debug "     key_debug turned on to speed up rendering\n"
                #debug "     Ignore warning about union below.\n"
        #end
}        

#declare KeyHead = difference {
        cylinder { <0, 0, -0.05>, <0, 0, 0.05>, 1.20 }
        
        object { KeyHeadDeco translate  0.04505*z }
        object { KeyHeadDeco translate -0.04505*z }
        
        cylinder { <0, 0, -0.1>, <0, 0, 0.1>, 0.28
                translate -0.70*y
        }
        
        bounded_by { cylinder { <0, 0, -0.05>, <0, 0, 0.05>, 1.20 } }
        
        scale <0, 0, 0>
        translate -0.90*y
}
          

//full modern Key
#declare modernKey = difference {
        union {
                object { KeyBody }
                object { KeyHead }
        } 
        



        object { CutPiece }
        object { CutPiece              translate  0.50*x }
        object { CutPiece rotate 180*y translate  0.25*x }
        object { CutPiece rotate 180*y translate -0.25*x }

        bounded_by {
                union {
                        cylinder { <0, 0, -0.05>, <0, 0, 0.05>, 1.20
                                scale <0, 0, 0>
                                translate -0.90*y
                        }
                        box { <-0.40, 0.00, 0.05>, <0.70, 4.00, 0.05> }
                } 

                
        
        } 
          texture { pigment{ color rgb< 1, 1, 1>*0.5 } //  color Gray50
           // normal { bumps 0.5 scale 0.05 }
           finish { phong 1 }
          } 
}

//silver old key
#declare silver_key = union {
        //ring of key
        torus {
                0.4, 0.1
                translate <0.2, 0.1, 0>
        }
        //long bar of key
        cylinder {
                <0.6, 0.1, 0>, <3-0.1*0.4, 0.1, 0>, 0.1
        }
         //boxes represent the cut of key
        box {
                <2.1, 0+0.02, -0.5>
                <2.3, 0.2-0.02, 0>
        }
        box {
                <2.3, 0+0.02, -0.3>
                <2.5, 0.2-0.02, 0>
        }
        box {
                <2.5, 0+0.02, -0.4>
                <2.7, 0.2-0.02, 0>
        }

	    material {    
	        texture{ Polished_Chrome
                   finish { phong 1}
            }
	    } 
	     scale <0,0,0> rotate<0,0,0>
}     

#declare keyRing = torus { 0.45,0.03 
        texture { pigment{ color rgb<1.0,1.0,1.0>}
                  finish { phong 1 reflection 0.00}
                } // end of texture
        scale <1,1,1> rotate<0,0,0> translate<0,0.05,0>
      } // end of torus  -------------------------------
      
#declare gymLabel =  box{ <1.75,1.7,2.25> <-2.25,1.4,-2.75> 
    texture { 
         pigment{
         color rgb< 1.0, 0.0, 0.0>  
            //image_map { jpeg "gymCard.jpg"
            //map_type 0  
            //interpolate 2  
            //once 
            //}
         }  
    }
            scale<0,0,0> translate<0.75,0,0.75> 
}   

#declare cexLabel =  box{ <1.75,1.7,2.25> <-2.25,1.4,-2.75> 
    texture { 
         pigment{
         color rgb< 1.0, 0.0, 0.0>  
            //image_map { jpeg "cex.jpg"
            //map_type 0  
            //interpolate 2  
            //once 
            //}
         }  
    }
            scale<0,0,0> translate<0.75,0,0.75> 
} 
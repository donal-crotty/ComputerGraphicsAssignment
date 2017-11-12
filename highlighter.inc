declare highlighter = union{ 
//highlighter main body
cylinder { <-1,0,0>,<1.5,0,0>, 0.30
           texture { pigment { color Yellow}
                   //normal  { bumps 0.5 scale <0.25, 0.005,0.005>}  
                     finish  { phong 0.5 reflection{ 0.00 metallic 0.00} } 
                   } // end of texture
           scale <1,1,1> rotate<0,0,0> translate<0,0,0>
         } // end of cylinder  ------------------------------------
         
//middle black strip          
                cylinder { <0,0,0>,<0.15,0,0>, 0.301
           texture { pigment { color Black}
                   //normal  { bumps 0.5 scale <0.25, 0.005,0.005>}  
                     finish  { phong 0.5 reflection{ 0.00 metallic 0.00} } 
                   } // end of texture
           scale <1,1,1> rotate<0,0,0> translate<0.5,0,0>
         } // end of cylinder  ------------------------------------     
         
         }
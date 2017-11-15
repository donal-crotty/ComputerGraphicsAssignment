//creates an instance of a coin, this is then used and modified in each specific coin object  
         #declare COIN_BODY = union {

        difference {
                cylinder {
                        <0, 0, -0.1>, <0, 0, 0.1>, 1 
                        texture{pigment{color Gold *3.0}}
                }
        
                cylinder {
                        <0, 0, -0.2>, <0, 0, -0.077>, 0.88 
                }
        
                cylinder {
                        <0, 0, 0.2>, <0, 0, 0.077>, 0.88 
                }
                
                #declare n=0;
                
                #while(n<48)
                        cylinder {
                                <0, 0, -0.3>, <0, 0, 0.3>, 0.04 
                                translate <0, 1.03, 0>
                                rotate <0, 0, n*360/48>
                        }
                        
                
                        #declare n=n+1;
                #end
        
        }

        text {                                        #
                ttf "times.ttf" "E" 0.2, 0 
                texture { pigment{color Gold *5.0}}
                scale 0.25
                rotate <0, 0, 0>
                translate <0.08, 0.65, -0.1>
        }

        text {
                ttf "times.ttf" "2009" 0.2, 0
                texture { pigment{color Gold *5.0}}
                scale 0.25
                rotate <0, 0, 0>
                //translate <0.12, -0.75, -0.1>  
                translate <-0.30, -0.75, -0.1>
        }
}    


//1 Euro Coin  
#declare oneEuro = union {
   object {
          COIN_BODY
   }
        
   text {
        ttf "times.ttf" "1" 0.2, 0 
        texture {  pigment{color Gold *5.0}}
        scale 1
        rotate <0, 0, 0>
        translate <-0.10, -0.25, -0.1>
   }
        
        
   texture{   pigment{color Gold *1.2}
   }
        
   translate <0, 0, 0>
}       

//50 cent         
#declare fiftyCent = union {
   object {
          COIN_BODY
   }
        
   text {
        ttf "times.ttf" "50" 0.2, 0 
        texture {  pigment{color Gold *5.0}}
        scale 0.75
        rotate <0, 0, 0>
        translate <-0.30, -0.25, -0.1>
   }
        
        
   texture{   pigment{color Gold *1.2}
   }
        
   translate <0, 0, 0>
}  

//10 cent         
#declare tenCent = union {
   object {
          COIN_BODY
   }
        
   text {
        ttf "times.ttf" "10" 0.2, 0 
        texture {  pigment{color Gold *5.0}}
        scale 0.75
        rotate <0, 0, 0>
        translate <-0.35, -0.25, -0.1>
   }
        
        
   texture{   pigment{color Gold *1.2}
   }
        
   translate <0,0, 0>
}     







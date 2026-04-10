# Dual Axis Control Algorithm

Read four LDR sensors

left = LDR_left  
right = LDR_right  
top = LDR_top  
bottom = LDR_bottom  

Compute:

diffX = left − right  
diffY = top − bottom  

If abs(diffX) > threshold
    move horizontal motor

If abs(diffY) > threshold
    move vertical motor

Else stop

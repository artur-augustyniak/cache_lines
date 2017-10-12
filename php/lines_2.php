<?php

$x = array(array());

for ($j = 0; $j < 1000; $j++) 
{
    for ($i = 0; $i < 1000; $i++) 
    {
      $x[$j][$i] = $i + $j; 
    }
}

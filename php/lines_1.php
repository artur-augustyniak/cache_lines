<?php

$x = array(array());

for ($i = 0; $i < 1000; $i++) 
{
    for ($j = 0; $j < 1000; $j++)
    {
      $x[$j][$i] = $i + $j;
    }
}

<?php
//returns array of keys to first element found
//or boolean false if value is not found
//if flag != match_type, then typeless matching will be used
function getNavItemIndex($array, $item, $flag = 'MATCH_TYPE', $key = '')
{
  foreach($array as $key => $val)
  {
    if($val == $item)
    {
      if($flag == 'MATCH_TYPE')
      {
        if($val === $item)
        {
          return $key;
        }
      }
      else
      {
        return $key;
      }
    }
    else if(is_array($val))
    {
      if(($temp = getNavItemIndex($val, $item, $key)) !== false)
      {
        if(is_array($temp))
        {
          array_unshift($temp, $key);
          return $temp;
        }
        else
        {
          return array($key, $temp);
        }
      }
    }
  }
  return false;
}


$array = array('Renault' => array('Periods' => array('0-5' => array('options' => array('none', 'extra', 'trailer')),
                                                      '5-10' => array('options' => array('hopp')))));

print_r(getNavItemIndex($array, 'hopp'));

?>
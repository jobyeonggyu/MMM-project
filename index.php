<?php 

include_once "./layout.inc";        // layout include

$base = new Layout;


$base->link='./style.css';
 
 
$base->content="내용이 들어가는 부분입니다."; //본문을 만듦

$base->LayoutMain();

?>




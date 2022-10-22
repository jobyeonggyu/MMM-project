<?php

class Layout 
{
    public $link;
    public $style;
    public $content;
    public $title="MMM";
    public $analysis;

    public function LayoutMain()
    {
        echo"<!DOCTYPE html>";
        echo "<html lang='ko>'";
        echo "<head>";
        echo "<meta charset='utf-8'/";
        echo "<title>".$this->title."</title>";
        echo    $this->LayoutStyle();
        echo "</head>";
        echo "<body>";
        echo "<div id='container'>";
		echo	$this->LayoutHeader(); ; 
		echo	$this->LayoutContent(); 
		echo	$this->LayoutSide(); 
		echo	$this->LayoutFooter(); 
		echo "</div>";
        echo "</body>";
        echo "</html>";
    }

    // Style 추가
    public function LayoutStyle()
    {
        echo "<link rel='stylesheet' type='text/css' href='".$this->link."'/>";
        echo "<style>".$this->style."</style>";
    }

    // Header 추가
    public function LayoutHeader()
    {
        echo "<header>";
        echo "<div id='logo'>";
        echo "<h1>";
        echo "<a href='./index.php'>MMM</a>";
        echo "</h1>";

        echo "</div>";
        echo "</header>";
    }

    // 내용 추가
    public function LayoutContent()
    {
        echo "<section>";
        echo "<article>".$this->content."</article>";
        echo "</section>";
    }

    // 사이드 추가
    public function LayoutSide()
    {
        echo "<aside>";
        echo "이건 왜 레이아웃안되지";
        echo "</aside>";
        echo "</section>";
    }

    // Footer 추가
    public function LayoutFooter()
    {
        echo "<footer>";
        echo "MMM";
        echo "</footer";
    }

}
?>
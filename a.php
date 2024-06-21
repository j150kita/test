#!/usr/bin/php
<?php
  foreach(file('/usr/share/dict/words') as $line) {
    // trim() 関数を使って行の前後の空白や改行を取り除く
    $line = trim($line);
    // strpos() 関数を使って、文字列 "xy" が含まれるかを確認
    if (strpos($line, 'xy') !== false) {
      echo "$line\n";
    }
  }
?>
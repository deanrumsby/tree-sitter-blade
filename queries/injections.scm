; inherits: html

((escaped_echo_statement
   (raw_text) @injection.content
   (#set! injection.language "php_only")
   (#set! injection.include-children)))

((unescaped_echo_statement
   (raw_text) @injection.content
   (#set! injection.language "php_only")
   (#set! injection.include-children)))

((directive
   (directive_argument
     (raw_text) @injection.content
     (#set! injection.language "php_only")
     (#set! injection.include-children))))

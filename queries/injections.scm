; inherits: html

((escaped_echo_statement) @injection.content
        (#offset! @injection.content 0 2 0 -2)
        (#set! injection.language "php_only")
        (#set! injection.include-children))

((unescaped_echo_statement) @injection.content
        (#offset! @injection.content 0 4 0 -4)
        (#set! injection.language "php_only")
        (#set! injection.include-children))


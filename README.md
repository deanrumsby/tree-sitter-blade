# tree-sitter-blade

A tree-sitter grammar for Laravel blade files.

This is an extension of the work done by the author and contributors of [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html).

## status

I will be adding to the parser incrementally, below are the grammar features currently supported.

- echo statements `{{ }}` and `{{!! !!}}`

## todo (implementation details)

[ ] clean up `scan_php_text` in `scanner.c`.

## installation

In your neovim config add the following, whilst also ensuring you have [tree-sitter-php](https://github.com/tree-sitter/tree-sitter-php) installed.

```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

parser_config.blade = {
    install_info = {
		url = "https://github.com/deanrumsby/tree-sitter-blade",
		files = { "src/parser.c", "src/scanner.c" },
			branch = "main",
		},
		filetype = "blade",
	}

	vim.filetype.add({
		pattern = {
			[".*%.blade%.php"] = "blade",
		},
	})
```

then copy the `queries` directory from this repo as `queries/blade` in your `~/.config/nvim` directory.

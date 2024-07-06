# tree-sitter-blade

A tree-sitter grammar for Laravel blade files.

This is an extension of the work done by the author and contributors of [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html).

## Status

The grammar supports most of the base blade features, however there are some caveats:

- All directives outside of the @php directive are currently creating incorrect syntax trees, so don't rely on
  the trees to reveal an error in your syntax! The syntax trees created however do allow for nice syntax highlighting,
  and the next work to be done is reworking the grammar with the correct syntax trees.
- All directives are case sensitive (with what I believe is the common casing used). Again this will be fixed whilst
  updating the directive logic.
- There are probably missing keywords/ features/ bugs, but I will add/ update these as I go.
- I can't catch the echo statements embedded within `<script>` tags. This is because the parsing gets handed off to the
  javascript parser, so I don't believe I can help this.

I have added support for the long-form Alpine.js attributes.

## Installation

In your neovim config add the following, whilst also ensuring you have the parsers

- [tree-sitter-php](https://github.com/tree-sitter/tree-sitter-php)
- [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html)
- [tree-sitter-javascript](https://github.com/tree-sitter/tree-sitter-javascript)

installed.

I've deliberately kept the html syntax tree the same as the tree-sitter-html parser, to ensure any queries used by
them will work here.

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

Finally run `:TSInstall blade` within neovim to download and install the parser.

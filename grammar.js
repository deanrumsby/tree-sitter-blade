const html = require("tree-sitter-html/grammar");

module.exports = grammar(html, {
  name: "blade",

  rules: {
    source_file: ($) => repeat($._node),
  },
});

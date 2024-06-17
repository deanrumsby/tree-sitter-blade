typedef enum {
    SCRIPT_TAG,
    STYLE_TAG,
    ESCAPED_ECHO,
    UNESCAPED_ECHO,
} RawTextDelimiter;

static const char *DELIM_STRINGS[4] = {"</SCRIPT", "</STYLE", "}}", "!!}}"};

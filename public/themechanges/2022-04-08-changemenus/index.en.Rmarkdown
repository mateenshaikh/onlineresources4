---
title: Remove old menus
author: ''
date: '2022-04-08'
slug: []
categories: []
tags: []
weight: 5
---

# Moving original content 
inside of /content/ a new folder is created called `themeinfo`. Inside of that, a copy of `basics`, `cont`, `more`, and `shortcodes` is made as well as a new `_index.en.md`.

The file `/content/_index.en.md` needs to be modified so it refers to all the shortcodes now in themeinfo. Do a search replace of

```
%relref "
```

to

```
%relref "themeinfo/
```

After that, in each of the folders first mentioned, edit the corresponding `_index.en.md` and add 

```yaml
hidden: true
```

into the preamble bit. for example

```yaml
---
chapter: true
title: Basics
weight: 1
hidden: true
---
```

Remember to do this for all four folders.


{{< tabs >}}
{{% tab name="r" %}}
```r
require(blogdown)
stop_server();build_site();serve_site()
```
{{% /tab %}}
{{% tab name="bash" %}}
```bash
#if not already running
hugo server
```
{{% /tab %}}
{{< /tabs >}}



require 'commonmarker'

doc = CommonMarker.render_doc('Some *kramdown* **text**
```yaml
var x = function()
```')
puts doc.to_html
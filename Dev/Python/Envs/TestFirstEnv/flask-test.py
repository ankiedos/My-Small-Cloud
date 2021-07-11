import flask

app = flask.Flask('')

@app.route('/')
def index():
	return "<h1>Hello, Flask's World!</h1>"

@app.route('/about')
def about_the_author():
	return "<ul><li>Something</li><li>about</li><li>the</li><li>author</li></ul>"

@app.route('/contact')
def contact_me():
	return '''<ul>
    <li>email: <a href="mailto://antek_kiedos@outlook.com">antek_kiedos@outlook.com</a></li>
    <li>GitHub: <a href="https://github.com/ankiedos">ankiedos</a></li>
</ul>'''

@app.route('/makbet-characters.xml')
def akbet_characters():
	return '''
<?xml version="1.0" encoding="UTF8"?>
<drama title="makbet" author="William Sheakespeare">
    <characters>
        <character role="antagonist">Makbet</character>
        <character role="antagonist">Lady Makbet</character>
        <character role="protagonist">King Duncan</character>
    </characters>
</drama>'''
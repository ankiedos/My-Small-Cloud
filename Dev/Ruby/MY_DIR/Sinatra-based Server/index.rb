require 'sinatra'
require 'commonmarker'

authors_metric = CommonMarker.render_doc('```yaml
- Name: Antoni
- Surname: Kiedos
- Age: 16
- Country: Poland
```')
def logged_in?
    false
end
# set(:auth) do |*roles|   # <- notice the splat here
#     condition do
#         unless logged_in? && roles.any? {|role| current_user.in_role? role }
#             redirect "/login/", 303
#         end
#     end
# end
#class Application < Sinatra::Base
    get '/' do
        # 'Index'
        '<h1>Header 1</h1>
        <p>Some paragraphs...</p>'
        #200
    end
    get '/index' do
        redirect '/'
        #200
    end
    get '/index.html' do
        redirect '/'
        #200
    end
    get '/index.htm' do
        redirect '/'
        #200
    end

    get '/about' do
        "<h1>About me (author)</h1>
        #{authors_metric.to_html}"
        #200
    end
    get '/about.html' do
        redirect '/about'
        #200
    end
    get '/about.htm' do
        redirect '/about'
        #200
    end

    require 'json'
    get '/translate' do
        query = params['q']
        db = JSON File.read('database.json')
        if db.has_key?(query)
            "#{query} po polsku to: #{db[query]}"
        else
            "Niestety nie znaleziono żadnych wyników wyszukiwania dla frazy #{query}."
        end
    end

    get '/translate/new' do
        phrase = params['phrase']
        translated = params['translated']
        db = JSON File.read('database.json')
        db[phrase] = translated
        File.write('database.json', (JSON db))
        sleep 1
        "Succesfully added phrase #{phrase} as #{translated} to dictionary"
    end
    get '/*.*' do |path_to_file, ext|
        File.read(path_to_file + "." + ext)
    end

    get /.*/ do
        '<strong>Error 404: Page not found</strong>'
        #404
    end
    error do
        '<h1><strong>Some error occured...</strong></h1>'
    end

    # get "/my/account", :auth => [:user, :admin] do
    #   "Your Account Details"
    # end
    # get "/only/admin", :auth => :admin do
    #   "Only admins are allowed here!"
    # end
#end
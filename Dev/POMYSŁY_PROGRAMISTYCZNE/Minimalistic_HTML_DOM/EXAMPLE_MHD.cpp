// HTML:
// <html>
//     <head>...</head>
//     <body>
//         <h1 class="title-header">My Website</h1>
//         <h2 class="light">2-level header</h2>
//         <p>Lorem ipsum dolor sit amet</p>
//         <p>MY FIRST WEBSITE USING MHD</p>

MHD::Query q("document>body>h1.title-header[0]");
MHD::Replace(q.Class, MHD::Class("section-header"));
MHD::Append(q.Text, MHD::Text("Section 1"));

MHD::Query query("document>body>h2.light[0]");
MHD::Prepend(query.Text, MHD::Text("Hello, World!" + MHD::Break().ToHTML()));
MHD::Replace(query.Class, MHD::Class("dark"));

MHD::Query q2("document>body>p[1]");
MHD::Replace(q2.Text, q2.Text.SearchFor(MHD::Text("FIRST")), MHD::Text("SECOND"));

// Maybe in the future it will be q.Class.Replace("section-header"); instead
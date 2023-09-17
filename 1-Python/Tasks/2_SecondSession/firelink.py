import webbrowser

facebook_link="https://ar-ar.facebook.com"
Youtube_link="https://www.youtube.com"
github_link="https://github.com/mohannad999/Embedded-Linux-Course"


def fireFox (link):
    browser = webbrowser.get("fireFox")
    browser.open(link)
 

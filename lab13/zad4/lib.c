
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
        <title>struktury/zad4/lib.c at master from mmotel/c - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    <link href="https://d3nwyuy0nl342s.cloudfront.net/ba26f6a198e5e881573c321692d2255635b24eb8/stylesheets/bundle_github.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script type="text/javascript">
      if (typeof console == "undefined" || typeof console.log == "undefined")
        console = { log: function() {} }
    </script>
    <script type="text/javascript" charset="utf-8">
      var GitHub = {
        assetHost: 'https://d3nwyuy0nl342s.cloudfront.net'
      }
      var github_user = 'LordDraw'
      
    </script>
    <script src="https://d3nwyuy0nl342s.cloudfront.net/ba26f6a198e5e881573c321692d2255635b24eb8/javascripts/jquery/jquery-1.4.2.min.js" type="text/javascript"></script>
    <script src="https://d3nwyuy0nl342s.cloudfront.net/ba26f6a198e5e881573c321692d2255635b24eb8/javascripts/bundle_common.js" type="text/javascript"></script>
<script src="https://d3nwyuy0nl342s.cloudfront.net/ba26f6a198e5e881573c321692d2255635b24eb8/javascripts/bundle_github.js" type="text/javascript"></script>


    
    <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "mmotel/c"
      })
    </script>

    
  <link rel='canonical' href='/mmotel/c/blob/2c1d91162aa86e96c599f6fe78bf3c3ff5994326/struktury/zad4/lib.c'>

  <link href="https://github.com/mmotel/c/commits/master.atom" rel="alternate" title="Recent Commits to c:master" type="application/atom+xml" />

        <meta name="description" content="c - programy w C" />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "mmotel/c";
      GitHub.currentRef = 'master';
      GitHub.commitSHA = "2c1d91162aa86e96c599f6fe78bf3c3ff5994326";
      GitHub.currentPath = 'struktury/zad4/lib.c';
      GitHub.masterBranch = "master";

      
    </script>
  

        <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_setDomainName', 'none']);
      _gaq.push(['_trackPageview']);
      _gaq.push(['_trackPageLoadTime']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

    
  </head>

  

  <body class="logged_in page-blob  linux env-production">
    

    

    

    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="true">
        
          <a class="logo boring" href="https://github.com/">
            <img alt="github" class="default" src="https://d3nwyuy0nl342s.cloudfront.net/images/modules/header/logov3.png" />
            <!--[if (gt IE 8)|!(IE)]><!-->
            <img alt="github" class="hover" src="https://d3nwyuy0nl342s.cloudfront.net/images/modules/header/logov3-hover.png" />
            <!--<![endif]-->
          </a>
        
        
          





  
    <div class="userbox">
      <div class="avatarname">
        <a href="https://github.com/LordDraw"><img src="https://secure.gravatar.com/avatar/5907b10dcfc98404ada411139ad1aa4e?s=140&d=https://d3nwyuy0nl342s.cloudfront.net%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="20" height="20"  /></a>
        <a href="https://github.com/LordDraw" class="name">LordDraw</a>

        
        
      </div>
      <ul class="usernav">
        <li><a href="https://github.com/">Dashboard</a></li>
        <li>
          
          <a href="https://github.com/inbox">Inbox</a>
          <a href="https://github.com/inbox" class="unread_count ">0</a>
        </li>
        <li><a href="https://github.com/account">Account Settings</a></li>
                <li><a href="/logout">Log Out</a></li>
      </ul>
    </div><!-- /.userbox -->
  


        
        <div class="topsearch">
  
    <form action="/search" id="top_search_form" method="get">
      <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search">Advanced Search</a>
      <input type="search" class="search my_repos_autocompleter" name="q" results="5" placeholder="Search&hellip;" /> <input type="submit" value="Search" class="button" />
      <input type="hidden" name="type" value="Everything" />
      <input type="hidden" name="repo" value="" />
      <input type="hidden" name="langOverride" value="" />
      <input type="hidden" name="start_value" value="1" />
    </form>
    <ul class="nav">
      <li><a href="/explore">Explore GitHub</a></li>
      <li><a href="https://gist.github.com">Gist</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="http://help.github.com">Help</a></li>
    </ul>
  
</div>

      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public    instapaper_ignore readability-menu">

      

      <div class="title-actions-bar">
        <h1>
          <a href="/mmotel">mmotel</a> / <strong><a href="/mmotel/c">c</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="/mmotel/c/admin" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/mmotel/c/toggle_watch" class="minibutton btn-watch " id="watch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'b740251bf57b85360902a557ac86e2feb4d0d52a'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/mmotel/c/toggle_watch" class="minibutton btn-watch " id="unwatch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'b740251bf57b85360902a557ac86e2feb4d0d52a'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked" style="display:none"><a href="/mmotel/c/fork" class="minibutton btn-fork " id="fork_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'b740251bf57b85360902a557ac86e2feb4d0d52a'); f.appendChild(s);f.submit();return false;"><span><span class="icon"></span>Fork</span></a></li>
            <li class="for-hasfork" style="display:none"><a href="#" class="minibutton btn-fork " id="your_fork_button"><span><span class="icon"></span>Your Fork</span></a></li>
          

          <li id='pull_request_item' class='nspr' style='display:none'><a href="/mmotel/c/pull/new/master" class="minibutton btn-pull-request "><span><span class="icon"></span>Pull Request</span></a></li>
          
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/mmotel/c/watchers" title="Watchers" class="tooltipped downwards">1</a></li>
          <li class="forks"><a href="/mmotel/c/network" title="Forks" class="tooltipped downwards">1</a></li>
        </ul>
      </li>
    </ul>

      </div>

        
  <ul class="tabs">
    <li><a href="/mmotel/c" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="/mmotel/c/commits/master" highlight="repo_commits">Commits</a></li>
    <li><a href="/mmotel/c/network" highlight="repo_network">Network</a></li>
    <li><a href="/mmotel/c/pulls" highlight="repo_pulls">Pull Requests (0)</a></li>

    

    
      
      <li><a href="/mmotel/c/issues" highlight="issues">Issues (0)</a></li>
    

            
    <li><a href="/mmotel/c/graphs" highlight="repo_graphs">Graphs</a></li>

    <li class="contextswitch nochoices">
      <span class="toggle leftwards" >
        <em>Branch:</em>
        <code>master</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      
      <a href="/mmotel/c/branches" class="dropdown">Switch Branches (1)</a>
      <ul>
        
          
            <li><strong>master &#x2713;</strong></li>
            
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/mmotel/c/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

        <a href="/mmotel/c/downloads" class="download-source" id="download_button" title="Download source, tagged packages and binaries."><span class="icon"></span>Downloads</a>

      <div id="repository_desc_wrapper">
      <div id="repository_description" rel="repository_description_edit">
        
          <p>programy w C
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>

      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/mmotel/c/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="b740251bf57b85360902a557ac86e2feb4d0d52a" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="programy w C">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://" rel="nofollow"></a></p>
      </div>

      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/mmotel/c/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="b740251bf57b85360902a557ac86e2feb4d0d52a" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>
      </div>
      <div class="rule "></div>
            <div id="url_box" class="url-box">
        <ul class="clone-urls">
          
            
            <li id="http_clone_url"><a href="https://github.com/mmotel/c.git" data-permissions="Read-Only">HTTP</a></li>
            <li id="public_clone_url"><a href="git://github.com/mmotel/c.git" data-permissions="Read-Only">Git Read-Only</a></li>
          
          
        </ul>
        <input type="text" spellcheck="false" id="url_field" class="url-field" />
              <span style="display:none" id="url_box_clippy"></span>
      <span id="clippy_tooltip_url_box_clippy" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://d3nwyuy0nl342s.cloudfront.net/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=url_box_clippy&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://d3nwyuy0nl342s.cloudfront.net/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=url_box_clippy&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

        <p id="url_description">This URL has <strong>Read+Write</strong> access</p>
      </div>
    </div>

    <div class="frame frame-center tree-finder" style="display:none">
      <div class="breadcrumb">
        <b><a href="/mmotel/c">c</a></b> /
        <input class="tree-finder-input" type="text" name="query" autocomplete="off" spellcheck="false">
      </div>

      
        <div class="octotip">
          <p>
            <a href="/mmotel/c/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever">Dismiss</a>
            <strong>Octotip:</strong> You've activated the <em>file finder</em> by pressing <span class="kbd">t</span>
            Start typing to filter the file list. Use <span class="kbd badmono">↑</span> and <span class="kbd badmono">↓</span> to navigate,
            <span class="kbd">enter</span> to view files.
          </p>
        </div>
      

      <table class="tree-browser" cellpadding="0" cellspacing="0">
        <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
        <tr class="js-no-results no-results" style="display: none">
          <th colspan="2">No matching files</th>
        </tr>
        <tbody class="js-results-list">
        </tbody>
      </table>
    </div>

    <div id="jump-to-line" style="display:none">
      <h2>Jump to Line</h2>
      <form>
        <input class="textfield" type="text">
        <div class="full-button">
          <button type="submit" class="classy">
            <span>Go</span>
          </button>
        </div>
      </form>
    </div>


        

      </div><!-- /.pagehead -->

      

  







<script type="text/javascript">
  GitHub.downloadRepo = '/mmotel/c/archives/master'
  GitHub.revType = "master"

  GitHub.repoName = "c"
  GitHub.controllerName = "blob"
  GitHub.actionName     = "show"
  GitHub.currentAction  = "blob#show"

  
    GitHub.loggedIn = true
    GitHub.hasWriteAccess = false
    GitHub.hasAdminAccess = false
    GitHub.watchingRepo = false
    GitHub.ignoredRepo = false
    GitHub.hasForkOfRepo = ""
    GitHub.hasForked = false
  

  
</script>






<div class="flash-messages"></div>


  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/mmotel/c/commit/2c1d91162aa86e96c599f6fe78bf3c3ff5994326">add lib.c</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="https://secure.gravatar.com/avatar/975a607cf36cdb882b83b8cf00256afd?s=140&d=https://d3nwyuy0nl342s.cloudfront.net%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/mmotel">mmotel</a> <span>(author)</span></div>
        <div class="date">
          <abbr class="relatize" title="2011-05-17 06:50:41">Tue May 17 06:50:41 -0700 2011</abbr>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/mmotel/c/commit/2c1d91162aa86e96c599f6fe78bf3c3ff5994326" hotkey="c">2c1d91162aa86e96c599</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/mmotel/c/tree/2c1d91162aa86e96c599f6fe78bf3c3ff5994326" hotkey="t">0888b4de6be61403abda</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/mmotel/c/tree/10031856db61a3d6bbc4a5c51431db67fdd31fe9" hotkey="p">10031856db61a3d6bbc4</a>
      

    </div>
  </div>

    </div>
  </div>



  <div id="slider">

  

    <div class="breadcrumb" data-path="struktury/zad4/lib.c/">
      <b><a href="/mmotel/c/tree/2c1d91162aa86e96c599f6fe78bf3c3ff5994326">c</a></b> / <a href="/mmotel/c/tree/2c1d91162aa86e96c599f6fe78bf3c3ff5994326/struktury">struktury</a> / <a href="/mmotel/c/tree/2c1d91162aa86e96c599f6fe78bf3c3ff5994326/struktury/zad4">zad4</a> / lib.c       <span style="display:none" id="clippy_1679">struktury/zad4/lib.c</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://d3nwyuy0nl342s.cloudfront.net/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_1679&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://d3nwyuy0nl342s.cloudfront.net/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_1679&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="struktury/zad4/lib.c/" data-canonical-url="/mmotel/c/blob/2c1d91162aa86e96c599f6fe78bf3c3ff5994326/struktury/zad4/lib.c">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/mmotel/c/file-edit/__current_ref__/struktury/zad4/lib.c"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://d3nwyuy0nl342s.cloudfront.net/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100755</span>
                
                  <span>139 lines (111 sloc)</span>
                
                <span>3.101 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/mmotel/c/raw/master/struktury/zad4/lib.c" id="raw-url">raw</a></li>
                
                  <li><a href="/mmotel/c/blame/master/struktury/zad4/lib.c">blame</a></li>
                
                <li><a href="/mmotel/c/commits/master/struktury/zad4/lib.c">history</a></li>
              </ul>
            </div>
            
  <div class="data type-c">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/* Mateusz Motel</span></div><div class='line' id='LC2'><span class="cm">mateuszmotel@gmail.com */</span></div><div class='line' id='LC3'><br/></div><div class='line' id='LC4'><br/></div><div class='line' id='LC5'><span class="cp">#include&lt;stdio.h&gt;</span></div><div class='line' id='LC6'><span class="k">struct</span> <span class="n">point</span> <span class="p">{</span></div><div class='line' id='LC7'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">x</span><span class="p">;</span></div><div class='line' id='LC8'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">y</span><span class="p">;</span></div><div class='line' id='LC9'><span class="p">};</span></div><div class='line' id='LC10'><br/></div><div class='line' id='LC11'><span class="k">struct</span> <span class="n">rect</span> <span class="p">{</span></div><div class='line' id='LC12'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">point</span> <span class="n">ll</span><span class="p">;</span>		<span class="cm">/* lower left */</span></div><div class='line' id='LC13'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">point</span> <span class="n">ur</span><span class="p">;</span>		<span class="cm">/* upper right */</span></div><div class='line' id='LC14'><span class="p">};</span></div><div class='line' id='LC15'><br/></div><div class='line' id='LC16'><span class="k">struct</span> <span class="n">point</span> <span class="nf">makepoint</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">int</span> <span class="n">y</span><span class="p">)</span></div><div class='line' id='LC17'><span class="p">{</span></div><div class='line' id='LC18'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">point</span> <span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC19'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">temp</span><span class="p">.</span><span class="n">x</span> <span class="o">=</span> <span class="n">x</span><span class="p">;</span></div><div class='line' id='LC20'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">temp</span><span class="p">.</span><span class="n">y</span> <span class="o">=</span> <span class="n">y</span><span class="p">;</span></div><div class='line' id='LC21'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC22'><span class="p">};</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'><span class="k">struct</span> <span class="n">rect</span> <span class="nf">makerect</span><span class="p">(</span><span class="k">struct</span> <span class="n">point</span> <span class="n">ll</span><span class="p">,</span> <span class="k">struct</span> <span class="n">point</span> <span class="n">ur</span><span class="p">)</span></div><div class='line' id='LC25'><span class="p">{</span></div><div class='line' id='LC26'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">rect</span> <span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC27'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">temp</span><span class="p">.</span><span class="n">ll</span> <span class="o">=</span> <span class="n">ll</span><span class="p">;</span></div><div class='line' id='LC28'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">temp</span><span class="p">.</span><span class="n">ur</span> <span class="o">=</span> <span class="n">ur</span><span class="p">;</span></div><div class='line' id='LC29'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">temp</span><span class="p">;</span></div><div class='line' id='LC30'><span class="p">};</span></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'><span class="cm">/* ptinrect: zwr� je.li p nale�y do r, 0 je.li nie nale�y */</span></div><div class='line' id='LC33'><span class="kt">int</span> <span class="nf">ptinrect</span><span class="p">(</span><span class="k">struct</span> <span class="n">point</span> <span class="n">p</span><span class="p">,</span> <span class="k">struct</span> <span class="n">rect</span> <span class="n">r</span><span class="p">)</span></div><div class='line' id='LC34'><span class="p">{</span></div><div class='line' id='LC35'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">p</span><span class="p">.</span><span class="n">x</span> <span class="o">&gt;=</span> <span class="n">r</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span> <span class="o">&amp;&amp;</span> <span class="n">p</span><span class="p">.</span><span class="n">x</span> <span class="o">&lt;</span> <span class="n">r</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">&amp;&amp;</span> <span class="n">p</span><span class="p">.</span><span class="n">y</span> <span class="o">&gt;=</span> <span class="n">r</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span> <span class="o">&amp;&amp;</span> <span class="n">p</span><span class="p">.</span><span class="n">y</span> <span class="o">&lt;</span> <span class="n">r</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span><span class="p">;</span></div><div class='line' id='LC36'><span class="p">}</span></div><div class='line' id='LC37'><br/></div><div class='line' id='LC38'><span class="kt">int</span> <span class="nf">rectinrect</span><span class="p">(</span><span class="k">struct</span> <span class="n">rect</span> <span class="n">r1</span><span class="p">,</span> <span class="k">struct</span> <span class="n">rect</span> <span class="n">r2</span><span class="p">)</span></div><div class='line' id='LC39'><span class="p">{</span></div><div class='line' id='LC40'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">ptinrect</span><span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">,</span> <span class="n">r2</span><span class="p">)</span> <span class="o">&amp;&amp;</span> <span class="n">ptinrect</span><span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">,</span> <span class="n">r2</span><span class="p">);</span></div><div class='line' id='LC41'><span class="p">};</span></div><div class='line' id='LC42'><br/></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'><span class="cm">/* disjointrect: zwr� je.li r1 jest roz�.czny z r2, </span></div><div class='line' id='LC45'><span class="cm">   0 . w przeciwnym przypadku */</span></div><div class='line' id='LC46'><span class="kt">int</span> <span class="nf">disjointrect</span><span class="p">(</span><span class="k">struct</span> <span class="n">rect</span> <span class="n">r1</span><span class="p">,</span> <span class="k">struct</span> <span class="n">rect</span> <span class="n">r2</span><span class="p">)</span></div><div class='line' id='LC47'><span class="p">{</span></div><div class='line' id='LC48'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="o">!</span><span class="p">(</span><span class="n">ptinrect</span><span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">,</span> <span class="n">r1</span><span class="p">))</span> <span class="o">&amp;&amp;</span> <span class="o">!</span><span class="p">(</span><span class="n">ptinrect</span><span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">,</span> <span class="n">r1</span><span class="p">))</span></div><div class='line' id='LC49'>	<span class="o">&amp;&amp;</span> <span class="o">!</span><span class="p">(</span><span class="n">ptinrect</span><span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">,</span> <span class="n">r2</span><span class="p">))</span> <span class="o">&amp;&amp;</span> <span class="o">!</span><span class="p">(</span><span class="n">ptinrect</span><span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">,</span> <span class="n">r2</span><span class="p">));</span></div><div class='line' id='LC50'><span class="p">};</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'><span class="kt">int</span> <span class="nf">cz_ws_ll</span><span class="p">(</span><span class="k">struct</span> <span class="n">rect</span> <span class="n">r1</span><span class="p">,</span> <span class="k">struct</span> <span class="n">rect</span> <span class="n">r2</span><span class="p">)</span></div><div class='line' id='LC53'><span class="p">{</span></div><div class='line' id='LC54'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">cw</span><span class="p">,</span> <span class="n">pole</span><span class="p">;</span></div><div class='line' id='LC55'><br/></div><div class='line' id='LC56'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">&gt;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">&amp;&amp;</span> <span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">&gt;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC57'>	<span class="n">cw</span> <span class="o">=</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">);</span></div><div class='line' id='LC58'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">&lt;=</span> <span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">&amp;&amp;</span> <span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">&gt;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC59'>	<span class="n">cw</span> <span class="o">=</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">);</span></div><div class='line' id='LC60'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">&gt;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">&amp;&amp;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">&lt;=</span> <span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC61'>	<span class="n">cw</span> <span class="o">=</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">);</span></div><div class='line' id='LC62'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pole</span> <span class="o">=</span></div><div class='line' id='LC65'>	<span class="p">((</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">))</span> <span class="o">+</span></div><div class='line' id='LC66'>	<span class="p">((</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">))</span> <span class="o">-</span> <span class="n">cw</span><span class="p">;</span></div><div class='line' id='LC67'><br/></div><div class='line' id='LC68'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">pole</span><span class="p">;</span></div><div class='line' id='LC69'><span class="p">};</span></div><div class='line' id='LC70'><br/></div><div class='line' id='LC71'><span class="kt">int</span> <span class="nf">cz_ws_ur</span><span class="p">(</span><span class="k">struct</span> <span class="n">rect</span> <span class="n">r1</span><span class="p">,</span> <span class="k">struct</span> <span class="n">rect</span> <span class="n">r2</span><span class="p">)</span></div><div class='line' id='LC72'><span class="p">{</span></div><div class='line' id='LC73'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">cw</span><span class="p">,</span> <span class="n">pole</span><span class="p">;</span></div><div class='line' id='LC74'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span> <span class="o">&lt;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span> <span class="o">&amp;&amp;</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span> <span class="o">&lt;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC75'>	<span class="n">cw</span> <span class="o">=</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">);</span></div><div class='line' id='LC76'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span> <span class="o">&gt;=</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span> <span class="o">&amp;&amp;</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span> <span class="o">&lt;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC77'>	<span class="n">cw</span> <span class="o">=</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">);</span></div><div class='line' id='LC78'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span> <span class="o">&lt;</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span> <span class="o">&amp;&amp;</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span> <span class="o">&gt;=</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC79'>	<span class="n">cw</span> <span class="o">=</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">);</span></div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC81'><br/></div><div class='line' id='LC82'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pole</span> <span class="o">=</span></div><div class='line' id='LC83'>	<span class="p">((</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">))</span> <span class="o">+</span></div><div class='line' id='LC84'>	<span class="p">((</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">))</span> <span class="o">-</span> <span class="n">cw</span><span class="p">;</span></div><div class='line' id='LC85'><br/></div><div class='line' id='LC86'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">pole</span><span class="p">;</span></div><div class='line' id='LC87'><span class="p">};</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'><span class="kt">int</span> <span class="nf">area</span><span class="p">(</span><span class="k">struct</span> <span class="n">rect</span> <span class="n">r1</span><span class="p">,</span> <span class="k">struct</span> <span class="n">rect</span> <span class="n">r2</span><span class="p">)</span></div><div class='line' id='LC90'><span class="p">{</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">pp</span><span class="p">;</span></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* r1 zawiera sie w r2 lub r2 w r1 */</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">rectinrect</span><span class="p">(</span><span class="n">r1</span><span class="p">,</span> <span class="n">r2</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC96'>	<span class="n">pp</span> <span class="o">=</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">);</span></div><div class='line' id='LC97'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">rectinrect</span><span class="p">(</span><span class="n">r2</span><span class="p">,</span> <span class="n">r1</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC98'>	<span class="n">pp</span> <span class="o">=</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">);</span></div><div class='line' id='LC99'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC100'><br/></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* r1 i r2 sa rozlaczne */</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">disjointrect</span><span class="p">(</span><span class="n">r1</span><span class="p">,</span> <span class="n">r2</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC104'>	<span class="n">pp</span> <span class="o">=</span> <span class="p">((</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">))</span> <span class="o">+</span></div><div class='line' id='LC105'>	    <span class="p">((</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">)</span> <span class="o">*</span> <span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span> <span class="o">-</span> <span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">));</span></div><div class='line' id='LC106'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC107'><br/></div><div class='line' id='LC108'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/* r1 i r2 maja czesc wspolna */</span></div><div class='line' id='LC109'><br/></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'>	<span class="k">if</span> <span class="p">(</span><span class="n">ptinrect</span><span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ll</span><span class="p">,</span> <span class="n">r2</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC113'>	    <span class="n">pp</span> <span class="o">=</span> <span class="n">cz_ws_ll</span><span class="p">(</span><span class="n">r1</span><span class="p">,</span> <span class="n">r2</span><span class="p">);</span></div><div class='line' id='LC114'>	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">ptinrect</span><span class="p">(</span><span class="n">r1</span><span class="p">.</span><span class="n">ur</span><span class="p">,</span> <span class="n">r2</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC115'>	    <span class="n">pp</span> <span class="o">=</span> <span class="n">cz_ws_ur</span><span class="p">(</span><span class="n">r1</span><span class="p">,</span> <span class="n">r2</span><span class="p">);</span></div><div class='line' id='LC116'>	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">ptinrect</span><span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ll</span><span class="p">,</span> <span class="n">r1</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC117'>	    <span class="n">pp</span> <span class="o">=</span> <span class="n">cz_ws_ll</span><span class="p">(</span><span class="n">r2</span><span class="p">,</span> <span class="n">r1</span><span class="p">);</span></div><div class='line' id='LC118'>	<span class="p">}</span> <span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">ptinrect</span><span class="p">(</span><span class="n">r2</span><span class="p">.</span><span class="n">ur</span><span class="p">,</span> <span class="n">r1</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC119'>	    <span class="n">pp</span> <span class="o">=</span> <span class="n">cz_ws_ur</span><span class="p">(</span><span class="n">r2</span><span class="p">,</span> <span class="n">r1</span><span class="p">);</span></div><div class='line' id='LC120'>	<span class="p">};</span></div><div class='line' id='LC121'><br/></div><div class='line' id='LC122'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC123'><br/></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">pp</span><span class="p">;</span></div><div class='line' id='LC125'><span class="p">};</span></div><div class='line' id='LC126'><br/></div><div class='line' id='LC127'><span class="kt">void</span> <span class="nf">scanrect</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="n">prompt</span><span class="p">,</span> <span class="k">struct</span> <span class="n">rect</span> <span class="o">*</span><span class="n">r</span><span class="p">)</span></div><div class='line' id='LC128'><span class="p">{</span></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="n">prompt</span><span class="p">);</span></div><div class='line' id='LC130'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;</span><span class="se">\n</span><span class="s">ll.x: &quot;</span><span class="p">);</span></div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scanf</span><span class="p">(</span><span class="s">&quot;%i&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">((</span><span class="o">*</span><span class="n">r</span><span class="p">).</span><span class="n">ll</span><span class="p">.</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;ll.y: &quot;</span><span class="p">);</span></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scanf</span><span class="p">(</span><span class="s">&quot;%i&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">((</span><span class="o">*</span><span class="n">r</span><span class="p">).</span><span class="n">ll</span><span class="p">.</span><span class="n">y</span><span class="p">));</span></div><div class='line' id='LC134'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;ur.x: &quot;</span><span class="p">);</span></div><div class='line' id='LC135'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scanf</span><span class="p">(</span><span class="s">&quot;%i&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">((</span><span class="o">*</span><span class="n">r</span><span class="p">).</span><span class="n">ur</span><span class="p">.</span><span class="n">x</span><span class="p">));</span></div><div class='line' id='LC136'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">printf</span><span class="p">(</span><span class="s">&quot;ur.y: &quot;</span><span class="p">);</span></div><div class='line' id='LC137'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">scanf</span><span class="p">(</span><span class="s">&quot;%i&quot;</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">((</span><span class="o">*</span><span class="n">r</span><span class="p">).</span><span class="n">ur</span><span class="p">.</span><span class="n">y</span><span class="p">));</span></div><div class='line' id='LC138'><span class="p">};</span></div><div class='line' id='LC139'><br/></div></pre></div>
              
            
          </td>
        </tr>
      </table>
    
  </div>


          </div>
        </div>
      </div>
    </div>
  

  </div>


<div class="frame frame-loading" style="display:none;">
  <img src="https://d3nwyuy0nl342s.cloudfront.net/images/modules/ajax/big_spinner_336699.gif" height="32" width="32">
</div>

    </div>
  
      
    </div>

    <div id="footer" class="clearfix">
      <div class="site">
        <div class="sponsor">
          <a href="http://www.rackspace.com" class="logo">
            <img alt="Dedicated Server" height="36" src="https://d3nwyuy0nl342s.cloudfront.net/images/modules/footer/rackspace_logo.png?v2" width="38" />
          </a>
          Powered by the <a href="http://www.rackspace.com ">Dedicated
          Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
          Computing</a> of Rackspace Hosting<span>&reg;</span>
        </div>

        <ul class="links">
          <li class="blog"><a href="https://github.com/blog">Blog</a></li>
          <li><a href="https://github.com/contact">Support</a></li>
          <li><a href="https://github.com/training">Training</a></li>
          <li><a href="http://jobs.github.com">Job Board</a></li>
          <li><a href="http://shop.github.com">Shop</a></li>
          <li><a href="https://github.com/contact">Contact</a></li>
          <li><a href="http://developer.github.com">API</a></li>
          <li><a href="http://status.github.com">Status</a></li>
        </ul>
        <ul class="sosueme">
          <li class="main">&copy; 2011 <span id="_rrt" title="0.05842s from fe3.rs.github.com">GitHub</span> Inc. All rights reserved.</li>
          <li><a href="/site/terms">Terms of Service</a></li>
          <li><a href="/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
        </ul>
      </div>
    </div><!-- /#footer -->

    <script>window._auth_token = "b740251bf57b85360902a557ac86e2feb4d0d52a"</script>
    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>t</dt>
        <dd>Open tree</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>p</dt>
        <dd>Open parent</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selected down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selected up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle select target</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selected as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selected as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>e</dt>
          <dd>Close selected</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selected from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    

    <!--[if IE 8]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie8")
    </script>
    <![endif]-->

    <!--[if IE 7]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie7")
    </script>
    <![endif]-->

    
    <script type='text/javascript'></script>
    
  </body>
</html>


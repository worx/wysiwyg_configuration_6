<?php

/**
 * Implementation of hook_strongarm().
 */
function filterted_html_config_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'format';
  $strongarm->value = '1';

  $export['format'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlpurifier_clear_cache';
  $strongarm->value = 'Clear cache (Warning: Can result in performance degradation)';

  $export['htmlpurifier_clear_cache'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlpurifier_config_1';
  $strongarm->value = array(
    'Null_Attr.AllowedClasses' => '1',
    'Attr.AllowedFrameTargets' => '_blank',
    'Attr.AllowedRel' => '',
    'Attr.AllowedRev' => '',
    'Null_Attr.ClassUseCDATA' => '1',
    'Null_Attr.DefaultImageAlt' => '1',
    'Attr.DefaultInvalidImage' => '',
    'Attr.DefaultInvalidImageAlt' => 'Invalid image',
    'Attr.DefaultTextDir' => 'ltr',
    'Attr.EnableID' => '1',
    'Attr.ForbiddenClasses' => '',
    'Attr.IDBlacklist' => '',
    'Null_Attr.IDBlacklistRegexp' => '1',
    'Attr.IDPrefix' => '',
    'Attr.IDPrefixLocal' => '',
    'AutoFormat.AutoParagraph' => '1',
    'AutoFormat.Custom' => '',
    'AutoFormat.DisplayLinkURI' => '0',
    'AutoFormat.Linkify' => '1',
    'AutoFormat.PurifierLinkify.DocURL' => '#%s',
    'AutoFormat.PurifierLinkify' => '0',
    'AutoFormat.RemoveEmpty.RemoveNbsp.Exceptions' => 'td
th',
    'AutoFormat.RemoveEmpty.RemoveNbsp' => '0',
    'AutoFormat.RemoveEmpty' => '0',
    'AutoFormat.RemoveSpansWithoutAttributes' => '0',
    'CSS.AllowImportant' => '0',
    'CSS.AllowTricky' => '0',
    'Null_CSS.AllowedProperties' => '1',
    'CSS.ForbiddenProperties' => '',
    'CSS.MaxImgLength' => '1200px',
    'CSS.Proprietary' => '0',
    'Cache.DefinitionImpl' => 'Drupal',
    'Null_Cache.SerializerPath' => '1',
    'Core.AggressivelyFixLt' => '1',
    'Core.CollectErrors' => '0',
    'Core.ColorKeywords' => 'maroon:#800000
red:#FF0000
orange:#FFA500
yellow:#FFFF00
olive:#808000
purple:#800080
fuchsia:#FF00FF
white:#FFFFFF
lime:#00FF00
green:#008000
navy:#000080
blue:#0000FF
aqua:#00FFFF
teal:#008080
black:#000000
silver:#C0C0C0
gray:#808080
',
    'Core.ConvertDocumentToFragment' => '1',
    'Core.DirectLexLineNumberSyncInterval' => '0',
    'Core.Encoding' => 'utf-8',
    'Core.EscapeInvalidChildren' => '0',
    'Core.EscapeInvalidTags' => '0',
    'Core.EscapeNonASCIICharacters' => '0',
    'Core.HiddenElements' => 'script
style',
    'Core.Language' => 'en',
    'Null_Core.LexerImpl' => '1',
    'Null_Core.MaintainLineNumbers' => '1',
    'Core.NormalizeNewlines' => '1',
    'Core.RemoveInvalidImg' => '1',
    'Core.RemoveProcessingInstructions' => '0',
    'Null_Core.RemoveScriptContents' => '1',
    'Filter.Custom' => '',
    'Filter.ExtractStyleBlocks.Escaping' => '1',
    'Null_Filter.ExtractStyleBlocks.Scope' => '1',
    'Null_Filter.ExtractStyleBlocks.TidyImpl' => '1',
    'Filter.ExtractStyleBlocks' => '0',
    'Filter.YouTube' => '0',
    'Null_HTML.Allowed' => '1',
    'Null_HTML.AllowedAttributes' => '1',
    'Null_HTML.AllowedElements' => '1',
    'Null_HTML.AllowedModules' => '1',
    'HTML.Attr.Name.UseCDATA' => '0',
    'HTML.BlockWrapper' => 'p',
    'HTML.CoreModules' => 'Structure
Text
Hypertext
List
NonXMLCommonAttributes
XMLCommonAttributes
CommonAttributes',
    'Null_HTML.CustomDoctype' => '1',
    'HTML.Doctype' => 'XHTML 1.0 Transitional',
    'HTML.FlashAllowFullScreen' => '0',
    'HTML.ForbiddenAttributes' => '',
    'HTML.ForbiddenElements' => '',
    'HTML.MaxImgLength' => '1200',
    'HTML.Parent' => 'div',
    'HTML.Proprietary' => '0',
    'HTML.SafeEmbed' => '0',
    'HTML.SafeObject' => '0',
    'HTML.Strict' => '0',
    'HTML.TidyAdd' => '',
    'HTML.TidyLevel' => 'medium',
    'HTML.TidyRemove' => '',
    'HTML.Trusted' => '0',
    'HTML.XHTML' => '1',
    'Output.CommentScriptContents' => '1',
    'Output.FlashCompat' => '0',
    'Null_Output.Newline' => '1',
    'Output.SortAttr' => '0',
    'Output.TidyFormat' => '0',
    'Test.ForceNoIconv' => '0',
    'URI.AllowedSchemes' => 'http
https
mailto
ftp
nntp
news',
    'Null_URI.Base' => '1',
    'URI.DefaultScheme' => 'http',
    'URI.Disable' => '0',
    'URI.DisableExternal' => '0',
    'URI.DisableExternalResources' => '1',
    'URI.DisableResources' => '0',
    'URI.Host' => 'profiletest.hostsofamerica.com',
    'URI.HostBlacklist' => '',
    'URI.MakeAbsolute' => '0',
    'Null_URI.Munge' => '1',
    'URI.MungeResources' => '0',
    'Null_URI.MungeSecretKey' => '1',
    'URI.OverrideAllowedSchemes' => '1',
  );

  $export['htmlpurifier_config_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlpurifier_doublecache';
  $strongarm->value = 0;

  $export['htmlpurifier_doublecache'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlpurifier_help_1';
  $strongarm->value = 1;

  $export['htmlpurifier_help_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlpurifier_version_ours';
  $strongarm->value = '4.3.0';

  $export['htmlpurifier_version_ours'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_resize_filter_image_locations_1';
  $strongarm->value = array(
    'local' => 'local',
    'remote' => 0,
  );

  $export['image_resize_filter_image_locations_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_resize_filter_link_1';
  $strongarm->value = 0;

  $export['image_resize_filter_link_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_resize_filter_link_class_1';
  $strongarm->value = '';

  $export['image_resize_filter_link_class_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_resize_filter_link_rel_1';
  $strongarm->value = '';

  $export['image_resize_filter_link_rel_1'] = $strongarm;
  return $export;
}

/*
 * authres_status plugin
 * @version 0.1
 * @author pimlie
 */

$(document).ready(function(){
	$('#rcmauthres_status span').html('&nbsp;');
  var li = '<label><input type="checkbox" name="list_col[]" value="authres_status" id="cols_authres_status" /> <span>'+rcmail.get_label('authres_status.column_title')+'</span></label>';
  $("#listmenu fieldset ul input#cols_threads").parent().parent().parent().append('<li>'+li+'</li>'); // skin: classic
  $("#listoptions fieldset:first ul.proplist li:last-child").after('<li>'+li+'</li>'); // skin: larry
});
